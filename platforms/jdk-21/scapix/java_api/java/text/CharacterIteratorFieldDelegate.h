// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/text/Format_FieldDelegate.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class CharacterIteratorFieldDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::CharacterIteratorFieldDelegate>
{
	static constexpr fixed_string class_name = "java/text/CharacterIteratorFieldDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::text::Format_FieldDelegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE)
#define SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/Format_Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::CharacterIteratorFieldDelegate : public jni::object_base<"java/text/CharacterIteratorFieldDelegate",
	java::lang::Object,
	java::text::Format_FieldDelegate>
{
public:

	void formatted(jni::ref<java::text::Format_Field> attr, jni::ref<java::lang::Object> value, jint start, jint end, jni::ref<java::lang::StringBuffer> buffer) { return call_method<"formatted", void>(attr, value, start, end, buffer); }
	void formatted(jint fieldID, jni::ref<java::text::Format_Field> attr, jni::ref<java::lang::Object> value, jint start, jint end, jni::ref<java::lang::StringBuffer> buffer) { return call_method<"formatted", void>(fieldID, attr, value, start, end, buffer); }
	jni::ref<java::text::AttributedCharacterIterator> getIterator(jni::ref<java::lang::String> string) { return call_method<"getIterator", jni::ref<java::text::AttributedCharacterIterator>>(string); }

protected:

	CharacterIteratorFieldDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_CHARACTERITERATORFIELDDELEGATE
