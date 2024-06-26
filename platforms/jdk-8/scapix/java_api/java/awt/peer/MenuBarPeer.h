// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/MenuComponentPeer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class MenuBarPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::MenuBarPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/MenuBarPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::MenuComponentPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Menu.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::MenuBarPeer : public jni::object_base<"java/awt/peer/MenuBarPeer",
	java::lang::Object,
	java::awt::peer::MenuComponentPeer>
{
public:

	void addMenu(jni::ref<java::awt::Menu> p1) { return call_method<"addMenu", void>(p1); }
	void delMenu(jint p1) { return call_method<"delMenu", void>(p1); }
	void addHelpMenu(jni::ref<java::awt::Menu> p1) { return call_method<"addHelpMenu", void>(p1); }

protected:

	MenuBarPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_MENUBARPEER
