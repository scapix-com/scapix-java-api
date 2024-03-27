// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class EditorKit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::EditorKit>
{
	static constexpr fixed_string class_name = "javax/swing/text/EditorKit";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/javax/swing/JEditorPane.h>
#include <scapix/java_api/javax/swing/text/Caret.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::EditorKit : public jni::object_base<"javax/swing/text/EditorKit",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::EditorKit> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void install(jni::ref<javax::swing::JEditorPane> p1) { return call_method<"install", void>(p1); }
	void deinstall(jni::ref<javax::swing::JEditorPane> p1) { return call_method<"deinstall", void>(p1); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::text::ViewFactory> getViewFactory() { return call_method<"getViewFactory", jni::ref<javax::swing::text::ViewFactory>>(); }
	jni::ref<jni::array<javax::swing::Action>> getActions() { return call_method<"getActions", jni::ref<jni::array<javax::swing::Action>>>(); }
	jni::ref<javax::swing::text::Caret> createCaret() { return call_method<"createCaret", jni::ref<javax::swing::text::Caret>>(); }
	jni::ref<javax::swing::text::Document> createDefaultDocument() { return call_method<"createDefaultDocument", jni::ref<javax::swing::text::Document>>(); }
	void read(jni::ref<java::io::InputStream> p1, jni::ref<javax::swing::text::Document> p2, jint p3) { return call_method<"read", void>(p1, p2, p3); }
	void write(jni::ref<java::io::OutputStream> p1, jni::ref<javax::swing::text::Document> p2, jint p3, jint p4) { return call_method<"write", void>(p1, p2, p3, p4); }
	void read(jni::ref<java::io::Reader> p1, jni::ref<javax::swing::text::Document> p2, jint p3) { return call_method<"read", void>(p1, p2, p3); }
	void write(jni::ref<java::io::Writer> p1, jni::ref<javax::swing::text::Document> p2, jint p3, jint p4) { return call_method<"write", void>(p1, p2, p3, p4); }

protected:

	EditorKit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_EDITORKIT
