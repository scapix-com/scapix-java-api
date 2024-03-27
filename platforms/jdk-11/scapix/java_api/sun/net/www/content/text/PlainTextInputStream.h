// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::content::text { class PlainTextInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::content::text::PlainTextInputStream>
{
	static constexpr fixed_string class_name = "sun/net/www/content/text/PlainTextInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::content::text::PlainTextInputStream : public jni::object_base<"sun/net/www/content/text/PlainTextInputStream",
	java::io::FilterInputStream>
{
public:


protected:

	PlainTextInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_CONTENT_TEXT_PLAINTEXTINPUTSTREAM
