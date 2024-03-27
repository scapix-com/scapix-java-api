// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class AttributedString_AttributedStringIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::AttributedString_AttributedStringIterator>
{
	static constexpr fixed_string class_name = "java/text/AttributedString$AttributedStringIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::text::AttributedCharacterIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR)
#define SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/AttributedCharacterIterator_Attribute.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::AttributedString_AttributedStringIterator : public jni::object_base<"java/text/AttributedString$AttributedStringIterator",
	java::lang::Object,
	java::text::AttributedCharacterIterator>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jchar first() { return call_method<"first", jchar>(); }
	jchar last() { return call_method<"last", jchar>(); }
	jchar current() { return call_method<"current", jchar>(); }
	jchar next() { return call_method<"next", jchar>(); }
	jchar previous() { return call_method<"previous", jchar>(); }
	jchar setIndex(jint p1) { return call_method<"setIndex", jchar>(p1); }
	jint getBeginIndex() { return call_method<"getBeginIndex", jint>(); }
	jint getEndIndex() { return call_method<"getEndIndex", jint>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint getRunStart() { return call_method<"getRunStart", jint>(); }
	jint getRunStart(jni::ref<java::text::AttributedCharacterIterator_Attribute> p1) { return call_method<"getRunStart", jint>(p1); }
	jint getRunStart(jni::ref<java::util::Set> p1) { return call_method<"getRunStart", jint>(p1); }
	jint getRunLimit() { return call_method<"getRunLimit", jint>(); }
	jint getRunLimit(jni::ref<java::text::AttributedCharacterIterator_Attribute> p1) { return call_method<"getRunLimit", jint>(p1); }
	jint getRunLimit(jni::ref<java::util::Set> p1) { return call_method<"getRunLimit", jint>(p1); }
	jni::ref<java::util::Map> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Set> getAllAttributeKeys() { return call_method<"getAllAttributeKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::text::AttributedCharacterIterator_Attribute> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }

protected:

	AttributedString_AttributedStringIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDSTRING_ATTRIBUTEDSTRINGITERATOR