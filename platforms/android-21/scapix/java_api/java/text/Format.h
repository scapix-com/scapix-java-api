// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_FORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_FORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class Format; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::Format>
{
	static constexpr fixed_string class_name = "java/text/Format";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_FORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_FORMAT)
#define SCAPIX_JAVA_API_JAVA_TEXT_FORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/text/Format_Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::Format : public jni::object_base<"java/text/Format",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	using Field = Format_Field;

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> format(jni::ref<java::lang::Object> object) { return call_method<"format", jni::ref<java::lang::String>>(object); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> p1, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> p3) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(p1, p2, p3); }
	jni::ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(jni::ref<java::lang::Object> object) { return call_method<"formatToCharacterIterator", jni::ref<java::text::AttributedCharacterIterator>>(object); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> string) { return call_method<"parseObject", jni::ref<java::lang::Object>>(string); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> p1, jni::ref<java::text::ParsePosition> p2) { return call_method<"parseObject", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	Format(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_FORMAT
