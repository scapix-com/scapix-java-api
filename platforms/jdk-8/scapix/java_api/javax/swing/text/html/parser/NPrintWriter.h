// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/PrintWriter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html::parser { class NPrintWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::parser::NPrintWriter>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/parser/NPrintWriter";
	using base_classes = std::tuple<scapix::java_api::java::io::PrintWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::parser::NPrintWriter : public jni::object_base<"javax/swing/text/html/parser/NPrintWriter",
	java::io::PrintWriter>
{
public:

	static jni::ref<javax::swing::text::html::parser::NPrintWriter> new_object(jint p1) { return base_::new_object(p1); }
	void println(jni::ref<jni::array<jchar>> p1) { return call_method<"println", void>(p1); }

protected:

	NPrintWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_NPRINTWRITER
