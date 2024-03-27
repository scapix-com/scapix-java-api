// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::module { class ModuleDescriptor_Exports; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::module::ModuleDescriptor_Exports>
{
	static constexpr fixed_string class_name = "java/lang/module/ModuleDescriptor$Exports";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Exports_Modifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::module::ModuleDescriptor_Exports : public jni::object_base<"java/lang/module/ModuleDescriptor$Exports",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Modifier = ModuleDescriptor_Exports_Modifier;

	jni::ref<java::util::Set> modifiers() { return call_method<"modifiers", jni::ref<java::util::Set>>(); }
	jboolean isQualified() { return call_method<"isQualified", jboolean>(); }
	jni::ref<java::lang::String> source() { return call_method<"source", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> targets() { return call_method<"targets", jni::ref<java::util::Set>>(); }
	jint compareTo(jni::ref<java::lang::module::ModuleDescriptor_Exports> that) { return call_method<"compareTo", jint>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ModuleDescriptor_Exports(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_EXPORTS
