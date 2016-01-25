/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTriangleFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTriangleFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTriangleFilterWrap::ptpl;

VtkTriangleFilterWrap::VtkTriangleFilterWrap()
{ }

VtkTriangleFilterWrap::VtkTriangleFilterWrap(vtkSmartPointer<vtkTriangleFilter> _native)
{ native = _native; }

VtkTriangleFilterWrap::~VtkTriangleFilterWrap()
{ }

void VtkTriangleFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTriangleFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTriangleFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TriangleFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkTriangleFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPassLines", GetPassLines);
	Nan::SetPrototypeMethod(tpl, "getPassLines", GetPassLines);

	Nan::SetPrototypeMethod(tpl, "GetPassVerts", GetPassVerts);
	Nan::SetPrototypeMethod(tpl, "getPassVerts", GetPassVerts);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassLinesOff", PassLinesOff);
	Nan::SetPrototypeMethod(tpl, "passLinesOff", PassLinesOff);

	Nan::SetPrototypeMethod(tpl, "PassLinesOn", PassLinesOn);
	Nan::SetPrototypeMethod(tpl, "passLinesOn", PassLinesOn);

	Nan::SetPrototypeMethod(tpl, "PassVertsOff", PassVertsOff);
	Nan::SetPrototypeMethod(tpl, "passVertsOff", PassVertsOff);

	Nan::SetPrototypeMethod(tpl, "PassVertsOn", PassVertsOn);
	Nan::SetPrototypeMethod(tpl, "passVertsOn", PassVertsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPassLines", SetPassLines);
	Nan::SetPrototypeMethod(tpl, "setPassLines", SetPassLines);

	Nan::SetPrototypeMethod(tpl, "SetPassVerts", SetPassVerts);
	Nan::SetPrototypeMethod(tpl, "setPassVerts", SetPassVerts);

}

void VtkTriangleFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTriangleFilter> native = vtkSmartPointer<vtkTriangleFilter>::New();
		VtkTriangleFilterWrap* obj = new VtkTriangleFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTriangleFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTriangleFilterWrap::GetPassLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangleFilterWrap::GetPassVerts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassVerts();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTriangleFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
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

void VtkTriangleFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	vtkTriangleFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTriangleFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTriangleFilterWrap *w = new VtkTriangleFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTriangleFilterWrap::PassLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassLinesOff();
}

void VtkTriangleFilterWrap::PassLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassLinesOn();
}

void VtkTriangleFilterWrap::PassVertsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassVertsOff();
}

void VtkTriangleFilterWrap::PassVertsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassVertsOn();
}

void VtkTriangleFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTriangleFilter * r;
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
			Nan::New<v8::Function>(VtkTriangleFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTriangleFilterWrap *w = new VtkTriangleFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangleFilterWrap::SetPassLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassLines(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTriangleFilterWrap::SetPassVerts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTriangleFilterWrap>(info.Holder());
	vtkTriangleFilter *native = (vtkTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassVerts(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
