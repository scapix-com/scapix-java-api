// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/Style.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyleContext_NamedStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyleContext_NamedStyle>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyleContext$NamedStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::Style, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/StyleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::StyleContext_NamedStyle : public jni::object_base<"javax/swing/text/StyleContext$NamedStyle",
	java::lang::Object,
	javax::swing::text::Style,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::StyleContext_NamedStyle> new_object(jni::ref<javax::swing::text::StyleContext> p1, jni::ref<java::lang::String> p2, jni::ref<javax::swing::text::Style> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::text::StyleContext_NamedStyle> new_object(jni::ref<javax::swing::text::StyleContext> p1, jni::ref<javax::swing::text::Style> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::text::StyleContext_NamedStyle> new_object(jni::ref<javax::swing::text::StyleContext> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jint getAttributeCount() { return call_method<"getAttributeCount", jint>(); }
	jboolean isDefined(jni::ref<java::lang::Object> p1) { return call_method<"isDefined", jboolean>(p1); }
	jboolean isEqual(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"isEqual", jboolean>(p1); }
	jni::ref<javax::swing::text::AttributeSet> copyAttributes() { return call_method<"copyAttributes", jni::ref<javax::swing::text::AttributeSet>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::Object> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Enumeration> getAttributeNames() { return call_method<"getAttributeNames", jni::ref<java::util::Enumeration>>(); }
	jboolean containsAttribute(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"containsAttribute", jboolean>(p1, p2); }
	jboolean containsAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"containsAttributes", jboolean>(p1); }
	jni::ref<javax::swing::text::AttributeSet> getResolveParent() { return call_method<"getResolveParent", jni::ref<javax::swing::text::AttributeSet>>(); }
	void addAttribute(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"addAttribute", void>(p1, p2); }
	void addAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"addAttributes", void>(p1); }
	void removeAttribute(jni::ref<java::lang::Object> p1) { return call_method<"removeAttribute", void>(p1); }
	void removeAttributes(jni::ref<java::util::Enumeration> p1) { return call_method<"removeAttributes", void>(p1); }
	void removeAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"removeAttributes", void>(p1); }
	void setResolveParent(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"setResolveParent", void>(p1); }

protected:

	StyleContext_NamedStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONTEXT_NAMEDSTYLE
