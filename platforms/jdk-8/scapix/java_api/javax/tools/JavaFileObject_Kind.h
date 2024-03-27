// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class JavaFileObject_Kind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::JavaFileObject_Kind>
{
	static constexpr fixed_string class_name = "javax/tools/JavaFileObject$Kind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::JavaFileObject_Kind : public jni::object_base<"javax/tools/JavaFileObject$Kind",
	java::lang::Enum>
{
public:

	static jni::ref<javax::tools::JavaFileObject_Kind> SOURCE() { return get_static_field<"SOURCE", jni::ref<javax::tools::JavaFileObject_Kind>>(); }
	static jni::ref<javax::tools::JavaFileObject_Kind> CLASS() { return get_static_field<"CLASS", jni::ref<javax::tools::JavaFileObject_Kind>>(); }
	static jni::ref<javax::tools::JavaFileObject_Kind> HTML() { return get_static_field<"HTML", jni::ref<javax::tools::JavaFileObject_Kind>>(); }
	static jni::ref<javax::tools::JavaFileObject_Kind> OTHER() { return get_static_field<"OTHER", jni::ref<javax::tools::JavaFileObject_Kind>>(); }
	jni::ref<java::lang::String> extension() { return get_field<"extension", jni::ref<java::lang::String>>(); }

	static jni::ref<jni::array<javax::tools::JavaFileObject_Kind>> values() { return call_static_method<"values", jni::ref<jni::array<javax::tools::JavaFileObject_Kind>>>(); }
	static jni::ref<javax::tools::JavaFileObject_Kind> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<javax::tools::JavaFileObject_Kind>>(p1); }

protected:

	JavaFileObject_Kind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_KIND