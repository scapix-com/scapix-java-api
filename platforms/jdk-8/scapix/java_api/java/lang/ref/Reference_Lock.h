// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::ref { class Reference_Lock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ref::Reference_Lock>
{
	static constexpr fixed_string class_name = "java/lang/ref/Reference$Lock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK)
#define SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ref::Reference_Lock : public jni::object_base<"java/lang/ref/Reference$Lock",
	java::lang::Object>
{
public:


protected:

	Reference_Lock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_LOCK