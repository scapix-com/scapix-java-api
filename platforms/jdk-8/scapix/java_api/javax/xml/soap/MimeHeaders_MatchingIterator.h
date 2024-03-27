// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::soap { class MimeHeaders_MatchingIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::soap::MimeHeaders_MatchingIterator>
{
	static constexpr fixed_string class_name = "javax/xml/soap/MimeHeaders$MatchingIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR)
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::xml::soap::MimeHeaders_MatchingIterator : public jni::object_base<"javax/xml/soap/MimeHeaders$MatchingIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	MimeHeaders_MatchingIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADERS_MATCHINGITERATOR
