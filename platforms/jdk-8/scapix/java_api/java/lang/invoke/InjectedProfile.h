// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class InjectedProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::InjectedProfile>
{
	static constexpr fixed_string class_name = "java/lang/invoke/InjectedProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::InjectedProfile : public jni::object_base<"java/lang/invoke/InjectedProfile",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	InjectedProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INJECTEDPROFILE