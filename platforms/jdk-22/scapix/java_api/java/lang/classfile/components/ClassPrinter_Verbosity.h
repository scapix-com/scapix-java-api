// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::components { class ClassPrinter_Verbosity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::components::ClassPrinter_Verbosity>
{
	static constexpr fixed_string class_name = "java/lang/classfile/components/ClassPrinter$Verbosity";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::components::ClassPrinter_Verbosity : public jni::object_base<"java/lang/classfile/components/ClassPrinter$Verbosity",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity> MEMBERS_ONLY() { return get_static_field<"MEMBERS_ONLY", jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity>>(); }
	static jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity> CRITICAL_ATTRIBUTES() { return get_static_field<"CRITICAL_ATTRIBUTES", jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity>>(); }
	static jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity> TRACE_ALL() { return get_static_field<"TRACE_ALL", jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity>>(); }

	static jni::ref<jni::array<java::lang::classfile::components::ClassPrinter_Verbosity>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::classfile::components::ClassPrinter_Verbosity>>>(); }
	static jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::classfile::components::ClassPrinter_Verbosity>>(name); }

protected:

	ClassPrinter_Verbosity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CLASSPRINTER_VERBOSITY