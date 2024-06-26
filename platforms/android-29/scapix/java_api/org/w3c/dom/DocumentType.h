// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class DocumentType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::DocumentType>
{
	static constexpr fixed_string class_name = "org/w3c/dom/DocumentType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/NamedNodeMap.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::DocumentType : public jni::object_base<"org/w3c/dom/DocumentType",
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<org::w3c::dom::NamedNodeMap> getEntities() { return call_method<"getEntities", jni::ref<org::w3c::dom::NamedNodeMap>>(); }
	jni::ref<org::w3c::dom::NamedNodeMap> getNotations() { return call_method<"getNotations", jni::ref<org::w3c::dom::NamedNodeMap>>(); }
	jni::ref<java::lang::String> getPublicId() { return call_method<"getPublicId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getInternalSubset() { return call_method<"getInternalSubset", jni::ref<java::lang::String>>(); }

protected:

	DocumentType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENTTYPE
