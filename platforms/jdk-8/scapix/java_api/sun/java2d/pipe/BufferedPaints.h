// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class BufferedPaints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::BufferedPaints>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/BufferedPaints";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::BufferedPaints : public jni::object_base<"sun/java2d/pipe/BufferedPaints",
	java::lang::Object>
{
public:

	static jint MULTI_MAX_FRACTIONS() { return get_static_field<"MULTI_MAX_FRACTIONS", jint>(); }

	static jni::ref<sun::java2d::pipe::BufferedPaints> new_object() { return base_::new_object(); }
	static jint convertSRGBtoLinearRGB(jint p1) { return call_static_method<"convertSRGBtoLinearRGB", jint>(p1); }

protected:

	BufferedPaints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_BUFFEREDPAINTS
