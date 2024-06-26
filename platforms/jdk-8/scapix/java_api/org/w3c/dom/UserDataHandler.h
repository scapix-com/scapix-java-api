// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class UserDataHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::UserDataHandler>
{
	static constexpr fixed_string class_name = "org/w3c/dom/UserDataHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::UserDataHandler : public jni::object_base<"org/w3c/dom/UserDataHandler",
	java::lang::Object>
{
public:

	static jshort NODE_CLONED() { return get_static_field<"NODE_CLONED", jshort>(); }
	static jshort NODE_IMPORTED() { return get_static_field<"NODE_IMPORTED", jshort>(); }
	static jshort NODE_DELETED() { return get_static_field<"NODE_DELETED", jshort>(); }
	static jshort NODE_RENAMED() { return get_static_field<"NODE_RENAMED", jshort>(); }
	static jshort NODE_ADOPTED() { return get_static_field<"NODE_ADOPTED", jshort>(); }

	void handle(jshort p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Object> p3, jni::ref<org::w3c::dom::Node> p4, jni::ref<org::w3c::dom::Node> p5) { return call_method<"handle", void>(p1, p2, p3, p4, p5); }

protected:

	UserDataHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_USERDATAHANDLER
