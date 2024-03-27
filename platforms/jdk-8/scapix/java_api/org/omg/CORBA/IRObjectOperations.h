// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class IRObjectOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::IRObjectOperations>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/IRObjectOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/DefinitionKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::IRObjectOperations : public jni::object_base<"org/omg/CORBA/IRObjectOperations",
	java::lang::Object>
{
public:

	jni::ref<org::omg::CORBA::DefinitionKind> def_kind() { return call_method<"def_kind", jni::ref<org::omg::CORBA::DefinitionKind>>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	IRObjectOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_IROBJECTOPERATIONS