#if !defined  _AV_VIDEO_INPUT_HPP
    #define _AV_VIDEO_INPUT_HPP

    #include "av/CodecVideo.hpp"
    #include "av/FormatInput.hpp"

    namespace av {

        class VideoInput : public av::CodecVideo, public av::FormatInput {

            protected:
                virtual void openFile(String &fileName) override;
                virtual void initFormat(String demuxer, String codec) override;
                virtual void initVideoStream() override;
                virtual void initCodec() override;
                virtual void initCodec(AFunction<void(AVCodecContext *, AVCodec *)> setupCodec) override;

                virtual void closeFile() override;
                virtual void closeFormat() override;
                virtual void closeCodec() override;

            public:

                VideoInput();
                virtual ~VideoInput();

                virtual void rescaleTs(AVPacket *packet) const override;
                virtual void decode(AVPacket *packet, DecodeListener *listener) const;
        };
    }

#endif