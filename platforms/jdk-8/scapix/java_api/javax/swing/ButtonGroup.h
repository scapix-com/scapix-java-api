// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ButtonGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ButtonGroup>
{
	static constexpr fixed_string class_name = "javax/swing/ButtonGroup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/swing/AbstractButton.h>
#include <scapix/java_api/javax/swing/ButtonModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::ButtonGroup : public jni::object_base<"javax/swing/ButtonGroup",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::ButtonGroup> new_object() { return base_::new_object(); }
	void add(jni::ref<javax::swing::AbstractButton> p1) { return call_method<"add", void>(p1); }
	void remove(jni::ref<javax::swing::AbstractButton> p1) { return call_method<"remove", void>(p1); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<javax::swing::ButtonModel> getSelection() { return call_method<"getSelection", jni::ref<javax::swing::ButtonModel>>(); }
	void setSelected(jni::ref<javax::swing::ButtonModel> p1, jboolean p2) { return call_method<"setSelected", void>(p1, p2); }
	jboolean isSelected(jni::ref<javax::swing::ButtonModel> p1) { return call_method<"isSelected", jboolean>(p1); }
	jint getButtonCount() { return call_method<"getButtonCount", jint>(); }

protected:

	ButtonGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BUTTONGROUP