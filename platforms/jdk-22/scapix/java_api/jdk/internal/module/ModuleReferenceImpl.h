// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/module/ModuleReference.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleReferenceImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleReferenceImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleReferenceImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::module::ModuleReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor.h>
#include <scapix/java_api/java/lang/module/ModuleReader.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/jdk/internal/module/ModuleHashes.h>
#include <scapix/java_api/jdk/internal/module/ModuleHashes_HashSupplier.h>
#include <scapix/java_api/jdk/internal/module/ModulePatcher.h>
#include <scapix/java_api/jdk/internal/module/ModuleResolution.h>
#include <scapix/java_api/jdk/internal/module/ModuleTarget.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ModuleReferenceImpl : public jni::object_base<"jdk/internal/module/ModuleReferenceImpl",
	java::lang::module::ModuleReference>
{
public:

	static jni::ref<jdk::internal::module::ModuleReferenceImpl> new_object(jni::ref<java::lang::module::ModuleDescriptor> descriptor, jni::ref<java::net::URI> location, jni::ref<java::util::function::Supplier> readerSupplier, jni::ref<jdk::internal::module::ModulePatcher> patcher, jni::ref<jdk::internal::module::ModuleTarget> target, jni::ref<jdk::internal::module::ModuleHashes> recordedHashes, jni::ref<jdk::internal::module::ModuleHashes_HashSupplier> hasher, jni::ref<jdk::internal::module::ModuleResolution> moduleResolution) { return base_::new_object(descriptor, location, readerSupplier, patcher, target, recordedHashes, hasher, moduleResolution); }
	jni::ref<java::lang::module::ModuleReader> open() { return call_method<"open", jni::ref<java::lang::module::ModuleReader>>(); }
	jboolean isPatched() { return call_method<"isPatched", jboolean>(); }
	jni::ref<jdk::internal::module::ModuleTarget> moduleTarget() { return call_method<"moduleTarget", jni::ref<jdk::internal::module::ModuleTarget>>(); }
	jni::ref<jdk::internal::module::ModuleHashes> recordedHashes() { return call_method<"recordedHashes", jni::ref<jdk::internal::module::ModuleHashes>>(); }
	jni::ref<jdk::internal::module::ModuleResolution> moduleResolution() { return call_method<"moduleResolution", jni::ref<jdk::internal::module::ModuleResolution>>(); }
	jni::ref<jni::array<jbyte>> computeHash(jni::ref<java::lang::String> algorithm) { return call_method<"computeHash", jni::ref<jni::array<jbyte>>>(algorithm); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ModuleReferenceImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL