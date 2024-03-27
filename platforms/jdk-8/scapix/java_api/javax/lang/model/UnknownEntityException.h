// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model { class UnknownEntityException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::UnknownEntityException>
{
	static constexpr fixed_string class_name = "javax/lang/model/UnknownEntityException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::UnknownEntityException : public jni::object_base<"javax/lang/model/UnknownEntityException",
	java::lang::RuntimeException>
{
public:


protected:

	UnknownEntityException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UNKNOWNENTITYEXCEPTION
