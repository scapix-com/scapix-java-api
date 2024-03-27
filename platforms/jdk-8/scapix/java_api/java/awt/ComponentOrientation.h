// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class ComponentOrientation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::ComponentOrientation>
{
	static constexpr fixed_string class_name = "java/awt/ComponentOrientation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION)
#define SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::ComponentOrientation : public jni::object_base<"java/awt/ComponentOrientation",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::awt::ComponentOrientation> LEFT_TO_RIGHT() { return get_static_field<"LEFT_TO_RIGHT", jni::ref<java::awt::ComponentOrientation>>(); }
	static jni::ref<java::awt::ComponentOrientation> RIGHT_TO_LEFT() { return get_static_field<"RIGHT_TO_LEFT", jni::ref<java::awt::ComponentOrientation>>(); }
	static jni::ref<java::awt::ComponentOrientation> UNKNOWN() { return get_static_field<"UNKNOWN", jni::ref<java::awt::ComponentOrientation>>(); }

	jboolean isHorizontal() { return call_method<"isHorizontal", jboolean>(); }
	jboolean isLeftToRight() { return call_method<"isLeftToRight", jboolean>(); }
	static jni::ref<java::awt::ComponentOrientation> getOrientation(jni::ref<java::util::Locale> p1) { return call_static_method<"getOrientation", jni::ref<java::awt::ComponentOrientation>>(p1); }
	static jni::ref<java::awt::ComponentOrientation> getOrientation(jni::ref<java::util::ResourceBundle> p1) { return call_static_method<"getOrientation", jni::ref<java::awt::ComponentOrientation>>(p1); }

protected:

	ComponentOrientation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COMPONENTORIENTATION