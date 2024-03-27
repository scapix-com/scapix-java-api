// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/ReasonPhraseCatalog.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl { class EnglishReasonPhraseCatalog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::EnglishReasonPhraseCatalog>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/EnglishReasonPhraseCatalog";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::ReasonPhraseCatalog>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::EnglishReasonPhraseCatalog : public jni::object_base<"org/apache/http/impl/EnglishReasonPhraseCatalog",
	java::lang::Object,
	org::apache::http::ReasonPhraseCatalog>
{
public:

	static jni::ref<org::apache::http::impl::EnglishReasonPhraseCatalog> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<org::apache::http::impl::EnglishReasonPhraseCatalog>>(); }

	jni::ref<java::lang::String> getReason(jint status, jni::ref<java::util::Locale> loc) { return call_method<"getReason", jni::ref<java::lang::String>>(status, loc); }

protected:

	EnglishReasonPhraseCatalog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ENGLISHREASONPHRASECATALOG
