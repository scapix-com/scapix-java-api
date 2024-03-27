// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class AttributedCharacterIterator_Attribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::AttributedCharacterIterator_Attribute>
{
	static constexpr fixed_string class_name = "java/text/AttributedCharacterIterator$Attribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::AttributedCharacterIterator_Attribute : public jni::object_base<"java/text/AttributedCharacterIterator$Attribute",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::text::AttributedCharacterIterator_Attribute> LANGUAGE() { return get_static_field<"LANGUAGE", jni::ref<java::text::AttributedCharacterIterator_Attribute>>(); }
	static jni::ref<java::text::AttributedCharacterIterator_Attribute> READING() { return get_static_field<"READING", jni::ref<java::text::AttributedCharacterIterator_Attribute>>(); }
	static jni::ref<java::text::AttributedCharacterIterator_Attribute> INPUT_METHOD_SEGMENT() { return get_static_field<"INPUT_METHOD_SEGMENT", jni::ref<java::text::AttributedCharacterIterator_Attribute>>(); }

	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AttributedCharacterIterator_Attribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE
