// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Window_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Window_Type>
{
	static constexpr fixed_string class_name = "java/awt/Window$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE)
#define SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Window_Type : public jni::object_base<"java/awt/Window$Type",
	java::lang::Enum>
{
public:

	static jni::ref<java::awt::Window_Type> NORMAL() { return get_static_field<"NORMAL", jni::ref<java::awt::Window_Type>>(); }
	static jni::ref<java::awt::Window_Type> UTILITY() { return get_static_field<"UTILITY", jni::ref<java::awt::Window_Type>>(); }
	static jni::ref<java::awt::Window_Type> POPUP() { return get_static_field<"POPUP", jni::ref<java::awt::Window_Type>>(); }

	static jni::ref<jni::array<java::awt::Window_Type>> values() { return call_static_method<"values", jni::ref<jni::array<java::awt::Window_Type>>>(); }
	static jni::ref<java::awt::Window_Type> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::awt::Window_Type>>(p1); }

protected:

	Window_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_WINDOW_TYPE
