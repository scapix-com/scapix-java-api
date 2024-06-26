// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/Streamable.h>
#include <scapix/java_api/org/omg/CORBA/portable/ValueBase.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA::portable { class StreamableValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::portable::StreamableValue>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/portable/StreamableValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::Streamable, scapix::java_api::org::omg::CORBA::portable::ValueBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::portable::StreamableValue : public jni::object_base<"org/omg/CORBA/portable/StreamableValue",
	java::lang::Object,
	org::omg::CORBA::portable::Streamable,
	org::omg::CORBA::portable::ValueBase>
{
public:


protected:

	StreamableValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_STREAMABLEVALUE
