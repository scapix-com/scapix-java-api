// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/StringTemplate.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::runtime { class StringTemplateImplFactory_SimpleStringTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::runtime::StringTemplateImplFactory_SimpleStringTemplate>
{
	static constexpr fixed_string class_name = "java/lang/runtime/StringTemplateImplFactory$SimpleStringTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::StringTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE)
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::runtime::StringTemplateImplFactory_SimpleStringTemplate : public jni::object_base<"java/lang/runtime/StringTemplateImplFactory$SimpleStringTemplate",
	java::lang::Record,
	java::lang::StringTemplate>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::List> fragments() { return call_method<"fragments", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> values() { return call_method<"values", jni::ref<java::util::List>>(); }

protected:

	StringTemplateImplFactory_SimpleStringTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_STRINGTEMPLATEIMPLFACTORY_SIMPLESTRINGTEMPLATE
