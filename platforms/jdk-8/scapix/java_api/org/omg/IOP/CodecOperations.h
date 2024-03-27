// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::IOP { class CodecOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::IOP::CodecOperations>
{
	static constexpr fixed_string class_name = "org/omg/IOP/CodecOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::IOP::CodecOperations : public jni::object_base<"org/omg/IOP/CodecOperations",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> encode(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"encode", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<org::omg::CORBA::Any> decode(jni::ref<jni::array<jbyte>> p1) { return call_method<"decode", jni::ref<org::omg::CORBA::Any>>(p1); }
	jni::ref<jni::array<jbyte>> encode_value(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"encode_value", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<org::omg::CORBA::Any> decode_value(jni::ref<jni::array<jbyte>> p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"decode_value", jni::ref<org::omg::CORBA::Any>>(p1, p2); }

protected:

	CodecOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_CODECOPERATIONS
