// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/ProcessPath_DrawHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class BufferedRenderPipe_BufferedDrawHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::BufferedRenderPipe_BufferedDrawHandler>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/BufferedRenderPipe$BufferedDrawHandler";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::ProcessPath_DrawHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::pipe::BufferedRenderPipe_BufferedDrawHandler : public jni::object_base<"sun/java2d/pipe/BufferedRenderPipe$BufferedDrawHandler",
	sun::java2d::loops::ProcessPath_DrawHandler>
{
public:

	void drawLine(jint p1, jint p2, jint p3, jint p4) { return call_method<"drawLine", void>(p1, p2, p3, p4); }
	void drawPixel(jint p1, jint p2) { return call_method<"drawPixel", void>(p1, p2); }
	void startFillPath() { return call_method<"startFillPath", void>(); }
	void drawScanline(jint p1, jint p2, jint p3) { return call_method<"drawScanline", void>(p1, p2, p3); }
	void endFillPath() { return call_method<"endFillPath", void>(); }

protected:

	BufferedRenderPipe_BufferedDrawHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_BUFFEREDDRAWHANDLER
