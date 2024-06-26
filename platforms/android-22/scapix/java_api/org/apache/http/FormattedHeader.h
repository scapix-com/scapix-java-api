// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/Header.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class FormattedHeader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::FormattedHeader>
{
	static constexpr fixed_string class_name = "org/apache/http/FormattedHeader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::Header>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/util/CharArrayBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::FormattedHeader : public jni::object_base<"org/apache/http/FormattedHeader",
	java::lang::Object,
	org::apache::http::Header>
{
public:

	jni::ref<org::apache::http::util::CharArrayBuffer> getBuffer() { return call_method<"getBuffer", jni::ref<org::apache::http::util::CharArrayBuffer>>(); }
	jint getValuePos() { return call_method<"getValuePos", jint>(); }

protected:

	FormattedHeader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_FORMATTEDHEADER
