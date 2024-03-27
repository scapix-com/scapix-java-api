// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/org/omg/CORBA/IDLType.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class _IDLTypeStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::_IDLTypeStub>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/_IDLTypeStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::org::omg::CORBA::IDLType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/DefinitionKind.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/Delegate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::_IDLTypeStub : public jni::object_base<"org/omg/CORBA/_IDLTypeStub",
	org::omg::CORBA::portable::ObjectImpl,
	org::omg::CORBA::IDLType>
{
public:

	static jni::ref<org::omg::CORBA::_IDLTypeStub> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CORBA::_IDLTypeStub> new_object(jni::ref<org::omg::CORBA::portable::Delegate> p1) { return base_::new_object(p1); }
	jni::ref<org::omg::CORBA::TypeCode> type() { return call_method<"type", jni::ref<org::omg::CORBA::TypeCode>>(); }
	jni::ref<org::omg::CORBA::DefinitionKind> def_kind() { return call_method<"def_kind", jni::ref<org::omg::CORBA::DefinitionKind>>(); }
	void destroy() { return call_method<"destroy", void>(); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_IDLTypeStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA__IDLTYPESTUB