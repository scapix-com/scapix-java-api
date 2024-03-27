// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultStyledDocument_ElementBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultStyledDocument_ElementBuffer>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultStyledDocument$ElementBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/AbstractDocument_DefaultDocumentEvent.h>
#include <scapix/java_api/javax/swing/text/DefaultStyledDocument.h>
#include <scapix/java_api/javax/swing/text/DefaultStyledDocument_ElementSpec.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::DefaultStyledDocument_ElementBuffer : public jni::object_base<"javax/swing/text/DefaultStyledDocument$ElementBuffer",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::DefaultStyledDocument_ElementBuffer> new_object(jni::ref<javax::swing::text::DefaultStyledDocument> p1, jni::ref<javax::swing::text::Element> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::swing::text::Element> getRootElement() { return call_method<"getRootElement", jni::ref<javax::swing::text::Element>>(); }
	void insert(jint p1, jint p2, jni::ref<jni::array<javax::swing::text::DefaultStyledDocument_ElementSpec>> p3, jni::ref<javax::swing::text::AbstractDocument_DefaultDocumentEvent> p4) { return call_method<"insert", void>(p1, p2, p3, p4); }
	void remove(jint p1, jint p2, jni::ref<javax::swing::text::AbstractDocument_DefaultDocumentEvent> p3) { return call_method<"remove", void>(p1, p2, p3); }
	void change(jint p1, jint p2, jni::ref<javax::swing::text::AbstractDocument_DefaultDocumentEvent> p3) { return call_method<"change", void>(p1, p2, p3); }
	jni::ref<javax::swing::text::Element> clone(jni::ref<javax::swing::text::Element> p1, jni::ref<javax::swing::text::Element> p2) { return call_method<"clone", jni::ref<javax::swing::text::Element>>(p1, p2); }

protected:

	DefaultStyledDocument_ElementBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ELEMENTBUFFER