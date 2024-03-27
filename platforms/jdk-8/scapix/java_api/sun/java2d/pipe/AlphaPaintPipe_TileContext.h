// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class AlphaPaintPipe_TileContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::AlphaPaintPipe_TileContext>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/AlphaPaintPipe$TileContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/PaintContext.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::pipe::AlphaPaintPipe_TileContext : public jni::object_base<"sun/java2d/pipe/AlphaPaintPipe$TileContext",
	java::lang::Object>
{
public:

	static jni::ref<sun::java2d::pipe::AlphaPaintPipe_TileContext> new_object(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::PaintContext> p2) { return base_::new_object(p1, p2); }

protected:

	AlphaPaintPipe_TileContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_ALPHAPAINTPIPE_TILECONTEXT
