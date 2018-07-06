/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTriangleMeshPointNormalsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTriangleMeshPointNormalsWrap::ptpl;

VtkTriangleMeshPointNormalsWrap::VtkTriangleMeshPointNormalsWrap()
{ }

VtkTriangleMeshPointNormalsWrap::VtkTriangleMeshPointNormalsWrap(vtkSmartPointer<vtkTriangleMeshPointNormals> _native)
{ native = _native; }

VtkTriangleMeshPointNormalsWrap::~VtkTriangleMeshPointNormalsWrap()
{ }

void VtkTriangleMeshPointNormalsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTriangleMeshPointNormals").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TriangleMeshPointNormals").ToLocalChecked(), ConstructorGetter);
}

void VtkTriangleMeshPointNormalsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTriangleMeshPointNormalsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTriangleMeshPointNormalsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKTRIANGLEMESHPOINTNORMALSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRIANGLEMESHPOINTNORMALSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTriangleMeshPointNormalsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTriangleMeshPointNormals> native = vtkSmartPointer<vtkTriangleMeshPointNormals>::New();
		VtkTriangleMeshPointNormalsWrap* obj = new VtkTriangleMeshPointNormalsWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTriangleMeshPointNormalsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleMeshPointNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleMeshPointNormalsWrap>(info.Holder());
	vtkTriangleMeshPointNormals *native = (vtkTriangleMeshPointNormals *)wrapper->native.GetPointer();
	vtkTriangleMeshPointNormals * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTriangleMeshPointNormalsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTriangleMeshPointNormalsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTriangleMeshPointNormalsWrap *w = new VtkTriangleMeshPointNormalsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTriangleMeshPointNormalsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleMeshPointNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleMeshPointNormalsWrap>(info.Holder());
	vtkTriangleMeshPointNormals *native = (vtkTriangleMeshPointNormals *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTriangleMeshPointNormals * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTriangleMeshPointNormalsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTriangleMeshPointNormalsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTriangleMeshPointNormalsWrap *w = new VtkTriangleMeshPointNormalsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
