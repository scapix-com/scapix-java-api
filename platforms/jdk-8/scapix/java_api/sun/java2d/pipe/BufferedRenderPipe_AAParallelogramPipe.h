// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/pipe/ParallelogramPipe.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class BufferedRenderPipe_AAParallelogramPipe; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::BufferedRenderPipe_AAParallelogramPipe>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/BufferedRenderPipe$AAParallelogramPipe";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::pipe::ParallelogramPipe>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::pipe::BufferedRenderPipe_AAParallelogramPipe : public jni::object_base<"sun/java2d/pipe/BufferedRenderPipe$AAParallelogramPipe",
	java::lang::Object,
	sun::java2d::pipe::ParallelogramPipe>
{
public:

	void fillParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11) { return call_method<"fillParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	void drawParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12, jdouble p13) { return call_method<"drawParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }

protected:

	BufferedRenderPipe_AAParallelogramPipe(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDRENDERPIPE_AAPARALLELOGRAMPIPE
