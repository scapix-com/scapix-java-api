// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Dialog_ModalityType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Dialog_ModalityType>
{
	static constexpr fixed_string class_name = "java/awt/Dialog$ModalityType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE)
#define SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Dialog_ModalityType : public jni::object_base<"java/awt/Dialog$ModalityType",
	java::lang::Enum>
{
public:

	static jni::ref<java::awt::Dialog_ModalityType> MODELESS() { return get_static_field<"MODELESS", jni::ref<java::awt::Dialog_ModalityType>>(); }
	static jni::ref<java::awt::Dialog_ModalityType> DOCUMENT_MODAL() { return get_static_field<"DOCUMENT_MODAL", jni::ref<java::awt::Dialog_ModalityType>>(); }
	static jni::ref<java::awt::Dialog_ModalityType> APPLICATION_MODAL() { return get_static_field<"APPLICATION_MODAL", jni::ref<java::awt::Dialog_ModalityType>>(); }
	static jni::ref<java::awt::Dialog_ModalityType> TOOLKIT_MODAL() { return get_static_field<"TOOLKIT_MODAL", jni::ref<java::awt::Dialog_ModalityType>>(); }

	static jni::ref<jni::array<java::awt::Dialog_ModalityType>> values() { return call_static_method<"values", jni::ref<jni::array<java::awt::Dialog_ModalityType>>>(); }
	static jni::ref<java::awt::Dialog_ModalityType> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::awt::Dialog_ModalityType>>(p1); }

protected:

	Dialog_ModalityType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DIALOG_MODALITYTYPE
