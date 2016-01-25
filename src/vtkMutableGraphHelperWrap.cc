/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMutableGraphHelperWrap.h"
#include "vtkGraphWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMutableGraphHelperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMutableGraphHelperWrap::ptpl;

VtkMutableGraphHelperWrap::VtkMutableGraphHelperWrap()
{ }

VtkMutableGraphHelperWrap::VtkMutableGraphHelperWrap(vtkSmartPointer<vtkMutableGraphHelper> _native)
{ native = _native; }

VtkMutableGraphHelperWrap::~VtkMutableGraphHelperWrap()
{ }

void VtkMutableGraphHelperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMutableGraphHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMutableGraphHelper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MutableGraphHelper").ToLocalChecked(),tpl->GetFunction());
}

void VtkMutableGraphHelperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraph", GetGraph);
	Nan::SetPrototypeMethod(tpl, "getGraph", GetGraph);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveEdges", RemoveEdges);
	Nan::SetPrototypeMethod(tpl, "removeEdges", RemoveEdges);

	Nan::SetPrototypeMethod(tpl, "RemoveVertices", RemoveVertices);
	Nan::SetPrototypeMethod(tpl, "removeVertices", RemoveVertices);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

}

void VtkMutableGraphHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMutableGraphHelper> native = vtkSmartPointer<vtkMutableGraphHelper>::New();
		VtkMutableGraphHelperWrap* obj = new VtkMutableGraphHelperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMutableGraphHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMutableGraphHelperWrap::GetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraph();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMutableGraphHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableGraphHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	vtkMutableGraphHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMutableGraphHelperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMutableGraphHelperWrap *w = new VtkMutableGraphHelperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMutableGraphHelperWrap::RemoveEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveEdges(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableGraphHelperWrap::RemoveVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveVertices(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableGraphHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMutableGraphHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkMutableGraphHelperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMutableGraphHelperWrap *w = new VtkMutableGraphHelperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableGraphHelperWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkMutableGraphHelperWrap>(info.Holder());
	vtkMutableGraphHelper *native = (vtkMutableGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraph(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

