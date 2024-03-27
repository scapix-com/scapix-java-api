// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::utils { class CloneUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::utils::CloneUtils>
{
	static constexpr fixed_string class_name = "org/apache/http/client/utils/CloneUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::utils::CloneUtils : public jni::object_base<"org/apache/http/client/utils/CloneUtils",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> clone(jni::ref<java::lang::Object> obj) { return call_static_method<"clone", jni::ref<java::lang::Object>>(obj); }

protected:

	CloneUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_CLONEUTILS