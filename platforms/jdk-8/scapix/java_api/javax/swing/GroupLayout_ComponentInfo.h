// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_ComponentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_ComponentInfo>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$ComponentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/javax/swing/GroupLayout_LinkInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_ComponentInfo : public jni::object_base<"javax/swing/GroupLayout$ComponentInfo",
	java::lang::Object>
{
public:

	void dispose() { return call_method<"dispose", void>(); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	void setBounds(jni::ref<java::awt::Insets> p1, jint p2, jboolean p3) { return call_method<"setBounds", void>(p1, p2, p3); }
	void setComponent(jni::ref<java::awt::Component> p1) { return call_method<"setComponent", void>(p1); }
	jni::ref<java::awt::Component> getComponent() { return call_method<"getComponent", jni::ref<java::awt::Component>>(); }
	jboolean isLinked(jint p1) { return call_method<"isLinked", jboolean>(p1); }
	jni::ref<javax::swing::GroupLayout_LinkInfo> getLinkInfo(jint p1) { return call_method<"getLinkInfo", jni::ref<javax::swing::GroupLayout_LinkInfo>>(p1); }
	void clearCachedSize() { return call_method<"clearCachedSize", void>(); }

protected:

	GroupLayout_ComponentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_COMPONENTINFO