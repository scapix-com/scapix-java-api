// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MemberName_Factory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MemberName_Factory>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MemberName$Factory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MemberName.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MemberName_Factory : public jni::object_base<"java/lang/invoke/MemberName$Factory",
	java::lang::Object>
{
public:

	jni::ref<java::lang::invoke::MemberName> resolveOrFail(jbyte refKind, jni::ref<java::lang::invoke::MemberName> m, jni::ref<java::lang::Class> lookupClass, jint allowedModes, jni::ref<java::lang::Class> nsmClass) { return call_method<"resolveOrFail", jni::ref<java::lang::invoke::MemberName>>(refKind, m, lookupClass, allowedModes, nsmClass); }
	jni::ref<java::lang::invoke::MemberName> resolveOrNull(jbyte refKind, jni::ref<java::lang::invoke::MemberName> m, jni::ref<java::lang::Class> lookupClass, jint allowedModes) { return call_method<"resolveOrNull", jni::ref<java::lang::invoke::MemberName>>(refKind, m, lookupClass, allowedModes); }
	jni::ref<java::util::List> getMethods(jni::ref<java::lang::Class> defc, jboolean searchSupers, jni::ref<java::lang::Class> lookupClass) { return call_method<"getMethods", jni::ref<java::util::List>>(defc, searchSupers, lookupClass); }
	jni::ref<java::util::List> getMethods(jni::ref<java::lang::Class> defc, jboolean searchSupers, jni::ref<java::lang::String> name, jni::ref<java::lang::invoke::MethodType> type, jni::ref<java::lang::Class> lookupClass) { return call_method<"getMethods", jni::ref<java::util::List>>(defc, searchSupers, name, type, lookupClass); }
	jni::ref<java::util::List> getConstructors(jni::ref<java::lang::Class> defc, jni::ref<java::lang::Class> lookupClass) { return call_method<"getConstructors", jni::ref<java::util::List>>(defc, lookupClass); }
	jni::ref<java::util::List> getFields(jni::ref<java::lang::Class> defc, jboolean searchSupers, jni::ref<java::lang::Class> lookupClass) { return call_method<"getFields", jni::ref<java::util::List>>(defc, searchSupers, lookupClass); }
	jni::ref<java::util::List> getFields(jni::ref<java::lang::Class> defc, jboolean searchSupers, jni::ref<java::lang::String> name, jni::ref<java::lang::Class> type, jni::ref<java::lang::Class> lookupClass) { return call_method<"getFields", jni::ref<java::util::List>>(defc, searchSupers, name, type, lookupClass); }
	jni::ref<java::util::List> getNestedTypes(jni::ref<java::lang::Class> defc, jboolean searchSupers, jni::ref<java::lang::Class> lookupClass) { return call_method<"getNestedTypes", jni::ref<java::util::List>>(defc, searchSupers, lookupClass); }

protected:

	MemberName_Factory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMBERNAME_FACTORY
