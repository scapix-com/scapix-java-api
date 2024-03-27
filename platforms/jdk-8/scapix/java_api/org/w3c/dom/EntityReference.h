// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class EntityReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::EntityReference>
{
	static constexpr fixed_string class_name = "org/w3c/dom/EntityReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::EntityReference : public jni::object_base<"org/w3c/dom/EntityReference",
	java::lang::Object,
	org::w3c::dom::Node>
{
public:


protected:

	EntityReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_ENTITYREFERENCE