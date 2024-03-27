// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class FdLibm_Tanh; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::FdLibm_Tanh>
{
	static constexpr fixed_string class_name = "java/lang/FdLibm$Tanh";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH)
#define SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::FdLibm_Tanh : public jni::object_base<"java/lang/FdLibm$Tanh",
	java::lang::Object>
{
public:


protected:

	FdLibm_Tanh(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FDLIBM_TANH
