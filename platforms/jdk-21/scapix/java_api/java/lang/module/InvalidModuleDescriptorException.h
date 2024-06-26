// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::module { class InvalidModuleDescriptorException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::module::InvalidModuleDescriptorException>
{
	static constexpr fixed_string class_name = "java/lang/module/InvalidModuleDescriptorException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::module::InvalidModuleDescriptorException : public jni::object_base<"java/lang/module/InvalidModuleDescriptorException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::lang::module::InvalidModuleDescriptorException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::module::InvalidModuleDescriptorException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }

protected:

	InvalidModuleDescriptorException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_INVALIDMODULEDESCRIPTOREXCEPTION
