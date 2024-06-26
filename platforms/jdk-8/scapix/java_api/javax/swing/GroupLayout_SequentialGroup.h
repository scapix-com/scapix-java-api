// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/GroupLayout_Group.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_SequentialGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_SequentialGroup>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$SequentialGroup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::GroupLayout_Group>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/LayoutStyle_ComponentPlacement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::GroupLayout_SequentialGroup : public jni::object_base<"javax/swing/GroupLayout$SequentialGroup",
	javax::swing::GroupLayout_Group>
{
public:

	jni::ref<javax::swing::GroupLayout_SequentialGroup> addGroup(jni::ref<javax::swing::GroupLayout_Group> p1) { return call_method<"addGroup", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addGroup(jboolean p1, jni::ref<javax::swing::GroupLayout_Group> p2) { return call_method<"addGroup", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addComponent(jni::ref<java::awt::Component> p1) { return call_method<"addComponent", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addComponent(jboolean p1, jni::ref<java::awt::Component> p2) { return call_method<"addComponent", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addComponent(jni::ref<java::awt::Component> p1, jint p2, jint p3, jint p4) { return call_method<"addComponent", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3, p4); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addComponent(jboolean p1, jni::ref<java::awt::Component> p2, jint p3, jint p4, jint p5) { return call_method<"addComponent", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addGap(jint p1) { return call_method<"addGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addGap(jint p1, jint p2, jint p3) { return call_method<"addGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addPreferredGap(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::JComponent> p2, jni::ref<javax::swing::LayoutStyle_ComponentPlacement> p3) { return call_method<"addPreferredGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addPreferredGap(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::JComponent> p2, jni::ref<javax::swing::LayoutStyle_ComponentPlacement> p3, jint p4, jint p5) { return call_method<"addPreferredGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addPreferredGap(jni::ref<javax::swing::LayoutStyle_ComponentPlacement> p1) { return call_method<"addPreferredGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addPreferredGap(jni::ref<javax::swing::LayoutStyle_ComponentPlacement> p1, jint p2, jint p3) { return call_method<"addPreferredGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2, p3); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addContainerGap() { return call_method<"addContainerGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(); }
	jni::ref<javax::swing::GroupLayout_SequentialGroup> addContainerGap(jint p1, jint p2) { return call_method<"addContainerGap", jni::ref<javax::swing::GroupLayout_SequentialGroup>>(p1, p2); }

protected:

	GroupLayout_SequentialGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_SEQUENTIALGROUP
