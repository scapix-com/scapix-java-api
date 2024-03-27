// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HeaderIterator.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class BasicListHeaderIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::BasicListHeaderIterator>
{
	static constexpr fixed_string class_name = "org/apache/http/message/BasicListHeaderIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HeaderIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/Header.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::BasicListHeaderIterator : public jni::object_base<"org/apache/http/message/BasicListHeaderIterator",
	java::lang::Object,
	org::apache::http::HeaderIterator>
{
public:

	static jni::ref<org::apache::http::message::BasicListHeaderIterator> new_object(jni::ref<java::util::List> headers, jni::ref<java::lang::String> name) { return base_::new_object(headers, name); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<org::apache::http::Header> nextHeader() { return call_method<"nextHeader", jni::ref<org::apache::http::Header>>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	BasicListHeaderIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLISTHEADERITERATOR
