// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleAttribute_ModuleAttributeBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ModuleAttributeBuilderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ModuleAttributeBuilderImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ModuleAttributeBuilderImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>
#include <scapix/java_api/java/lang/constant/PackageDesc.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleExportInfo.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleOpenInfo.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleProvideInfo.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleRequireInfo.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ModuleEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ModuleAttributeBuilderImpl : public jni::object_base<"jdk/internal/classfile/impl/ModuleAttributeBuilderImpl",
	java::lang::Object,
	jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ModuleAttributeBuilderImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName) { return base_::new_object(moduleName); }
	static jni::ref<jdk::internal::classfile::impl::ModuleAttributeBuilderImpl> new_object(jni::ref<java::lang::constant::ModuleDesc> moduleName) { return base_::new_object(moduleName); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute> build() { return call_method<"build", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute>>(); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> moduleName(jni::ref<java::lang::constant::ModuleDesc> moduleName) { return call_method<"moduleName", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(moduleName); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> moduleFlags(jint flags) { return call_method<"moduleFlags", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(flags); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> moduleVersion(jni::ref<java::lang::String> version) { return call_method<"moduleVersion", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(version); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> requires_(jni::ref<java::lang::constant::ModuleDesc> module, jint flags, jni::ref<java::lang::String> version) { return call_method<"requires", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(module, flags, version); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> requires_(jni::ref<jdk::internal::classfile::attribute::ModuleRequireInfo> requires_) { return call_method<"requires", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(requires_); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> exports(jni::ref<java::lang::constant::PackageDesc> pkge, jint flags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> exportsToModules) { return call_method<"exports", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(pkge, flags, exportsToModules); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> exports(jni::ref<jdk::internal::classfile::attribute::ModuleExportInfo> exports) { return call_method<"exports", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(exports); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> opens(jni::ref<java::lang::constant::PackageDesc> pkge, jint flags, jni::ref<jni::array<java::lang::constant::ModuleDesc>> opensToModules) { return call_method<"opens", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(pkge, flags, opensToModules); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> opens(jni::ref<jdk::internal::classfile::attribute::ModuleOpenInfo> opens) { return call_method<"opens", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(opens); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> uses(jni::ref<java::lang::constant::ClassDesc> service) { return call_method<"uses", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(service); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> uses(jni::ref<jdk::internal::classfile::constantpool::ClassEntry> uses) { return call_method<"uses", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(uses); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> provides(jni::ref<java::lang::constant::ClassDesc> service, jni::ref<jni::array<java::lang::constant::ClassDesc>> implClasses) { return call_method<"provides", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(service, implClasses); }
	jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder> provides(jni::ref<jdk::internal::classfile::attribute::ModuleProvideInfo> provides) { return call_method<"provides", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute_ModuleAttributeBuilder>>(provides); }

protected:

	ModuleAttributeBuilderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_MODULEATTRIBUTEBUILDERIMPL
