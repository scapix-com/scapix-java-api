// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER_FWD
#define SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::instrument { class TransformerManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::instrument::TransformerManager>
{
	static constexpr fixed_string class_name = "sun/instrument/TransformerManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER)
#define SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/instrument/ClassFileTransformer.h>
#include <scapix/java_api/java/security/ProtectionDomain.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::instrument::TransformerManager : public jni::object_base<"sun/instrument/TransformerManager",
	java::lang::Object>
{
public:

	void addTransformer(jni::ref<java::lang::instrument::ClassFileTransformer> p1) { return call_method<"addTransformer", void>(p1); }
	jboolean removeTransformer(jni::ref<java::lang::instrument::ClassFileTransformer> p1) { return call_method<"removeTransformer", jboolean>(p1); }
	jni::ref<jni::array<jbyte>> transform(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Class> p3, jni::ref<java::security::ProtectionDomain> p4, jni::ref<jni::array<jbyte>> p5) { return call_method<"transform", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5); }

protected:

	TransformerManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INSTRUMENT_TRANSFORMERMANAGER
