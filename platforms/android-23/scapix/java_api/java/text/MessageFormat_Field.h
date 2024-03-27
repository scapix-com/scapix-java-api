// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format_Field.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class MessageFormat_Field; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::MessageFormat_Field>
{
	static constexpr fixed_string class_name = "java/text/MessageFormat$Field";
	using base_classes = std::tuple<scapix::java_api::java::text::Format_Field>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD)
#define SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::MessageFormat_Field : public jni::object_base<"java/text/MessageFormat$Field",
	java::text::Format_Field>
{
public:

	static jni::ref<java::text::MessageFormat_Field> ARGUMENT() { return get_static_field<"ARGUMENT", jni::ref<java::text::MessageFormat_Field>>(); }


protected:

	MessageFormat_Field(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FIELD