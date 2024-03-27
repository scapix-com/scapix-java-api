// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_STROKE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_STROKE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Stroke; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Stroke>
{
	static constexpr fixed_string class_name = "java/awt/Stroke";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_STROKE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_STROKE)
#define SCAPIX_JAVA_API_JAVA_AWT_STROKE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Shape.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Stroke : public jni::object_base<"java/awt/Stroke",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Shape> createStrokedShape(jni::ref<java::awt::Shape> p1) { return call_method<"createStrokedShape", jni::ref<java::awt::Shape>>(p1); }

protected:

	Stroke(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_STROKE
