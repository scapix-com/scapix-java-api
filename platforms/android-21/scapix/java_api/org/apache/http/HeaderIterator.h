// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class HeaderIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::HeaderIterator>
{
	static constexpr fixed_string class_name = "org/apache/http/HeaderIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/Header.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::HeaderIterator : public jni::object_base<"org/apache/http/HeaderIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<org::apache::http::Header> nextHeader() { return call_method<"nextHeader", jni::ref<org::apache::http::Header>>(); }

protected:

	HeaderIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_HEADERITERATOR