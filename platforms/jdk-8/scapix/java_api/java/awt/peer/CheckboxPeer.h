// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/ComponentPeer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class CheckboxPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::CheckboxPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/CheckboxPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::ComponentPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/CheckboxGroup.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::CheckboxPeer : public jni::object_base<"java/awt/peer/CheckboxPeer",
	java::lang::Object,
	java::awt::peer::ComponentPeer>
{
public:

	void setState(jboolean p1) { return call_method<"setState", void>(p1); }
	void setCheckboxGroup(jni::ref<java::awt::CheckboxGroup> p1) { return call_method<"setCheckboxGroup", void>(p1); }
	void setLabel(jni::ref<java::lang::String> p1) { return call_method<"setLabel", void>(p1); }

protected:

	CheckboxPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_CHECKBOXPEER